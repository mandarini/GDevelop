declare namespace PIXI.filters {
  import PIXI = GlobalPIXIModule.PIXI;
  export class PixelateFilter extends PIXI.Filter {
    constructor(size?: PIXI.Point | number[] | number);
    size: PIXI.Point | number[] | number;
  }
}

declare module '@pixi/filter-pixelate' {
  export import PixelateFilter = PIXI.filters.PixelateFilter;
}
