namespace gdjs {
  import PIXI = GlobalPIXIModule.PIXI;
  gdjs.PixiFiltersTools.registerFilterCreator(
    'Sepia',
    new (class extends gdjs.PixiFiltersTools.PixiFilterCreator {
      makePIXIFilter(target, effectData) {
        const colorMatrixFilter = new PIXI.filters.ColorMatrixFilter();
        colorMatrixFilter.sepia(false);
        return colorMatrixFilter;
      }
      updatePreRender(filter, target) {}
      updateDoubleParameter(filter, parameterName, value) {
        // @ts-ignore - unsure why PIXI.filters is not recognised.
        const colorMatrixFilter = (filter as unknown) as PIXI.filters.ColorMatrixFilter;
        if (parameterName !== 'opacity') {
          return;
        }
        colorMatrixFilter.alpha = gdjs.PixiFiltersTools.clampValue(value, 0, 1);
      }
      updateStringParameter(filter, parameterName, value) {}
      updateBooleanParameter(filter, parameterName, value) {}
    })()
  );
}
