var gdjs;(function(r){const o=GlobalPIXIModule.PIXI;class a extends o.Filter{constructor(){const t=void 0,i=["precision mediump float;","","varying vec2 vTextureCoord;","uniform sampler2D uSampler;","uniform float intensity;","uniform float opacity;","","void main(void)","{","   mat3 nightMatrix = mat3(-2.0 * intensity, -1.0 * intensity, 0, -1.0 * intensity, 0, 1.0 * intensity, 0, 1.0 * intensity, 2.0 * intensity);","   gl_FragColor = texture2D(uSampler, vTextureCoord);","   gl_FragColor.rgb = mix(gl_FragColor.rgb, nightMatrix * gl_FragColor.rgb, opacity);","}"].join(`
`),n={intensity:{type:"1f",value:1},opacity:{type:"1f",value:1}};super(t,i,n)}}r.NightPixiFilter=a,a.prototype.constructor=r.NightPixiFilter,r.PixiFiltersTools.registerFilterCreator("Night",new class extends r.PixiFiltersTools.PixiFilterCreator{makePIXIFilter(e,t){return new r.NightPixiFilter}updatePreRender(e,t){}updateDoubleParameter(e,t,i){t!=="intensity"&&t!=="opacity"||(e.uniforms[t]=r.PixiFiltersTools.clampValue(i,0,1))}updateStringParameter(e,t,i){}updateBooleanParameter(e,t,i){}})})(gdjs||(gdjs={}));
//# sourceMappingURL=night-pixi-filter.js.map
