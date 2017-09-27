//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <VectorKit/VKTile.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface VKRasterTile : VKTile
{
    NSData *_data;
    shared_ptr_a3c46825 _styleManager;
    int _genericTileType;
    _Bool _hasGenericTileType;
    shared_ptr_479d1306 _gglTexture;
    struct RenderItem _renderItem;
    struct unique_ptr<ggl::Textured::Pos2DUVPipelineSetup, std::__1::default_delete<ggl::Textured::Pos2DUVPipelineSetup>> _pipelineSetup;
    struct unique_ptr<ggl::Clut::Pos2DUVPipelineSetup, std::__1::default_delete<ggl::Clut::Pos2DUVPipelineSetup>> _pipelineSetupCLUT;
    struct unique_ptr<ggl::TextureWithReverseAlpha::Pos2DUVPipelineSetup, std::__1::default_delete<ggl::TextureWithReverseAlpha::Pos2DUVPipelineSetup>> _shaderReverseAlphaSetup;
}

@property(nonatomic) shared_ptr_479d1306 gglTexture; // @synthesize gglTexture=_gglTexture;
@property(readonly, nonatomic) int genericTileType; // @synthesize genericTileType=_genericTileType;
@property(readonly, nonatomic) _Bool hasGenericTileType; // @synthesize hasGenericTileType=_hasGenericTileType;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)immediateLoad:(Device_9226c869 *)arg1;
- (void)dealloc;
- (void)gglBuildTexture:(Device_9226c869 *)arg1;
- (shared_ptr_8bee8aae)buildTextureDataFromCGImage:(struct CGImage *)arg1;
- (struct CGImage *)newCGImageFromData:(id)arg1;
@property(readonly, nonatomic) struct RenderItem *renderItem;
- (void)setupReverseAlphaShaderWithRenderState:(struct RenderState *)arg1 pipelineState:(const shared_ptr_726d1291 *)arg2 mesh:(struct Mesh *)arg3 roadAlpha:(float)arg4;
- (void)setupNormalShaderWithRenderState:(struct RenderState *)arg1 pipelineState:(const shared_ptr_74b38e53 *)arg2 mesh:(struct Mesh *)arg3;
- (void)setupClutShaderWithRenderState:(struct RenderState *)arg1 pipelineState:(const shared_ptr_caa7afd8 *)arg2 mesh:(struct Mesh *)arg3 clutTexture:(struct Texture2D *)arg4 clutBlend:(float)arg5;
- (id)initWithKey:(const struct VKTileKey *)arg1 imageData:(id)arg2 styleManager:(shared_ptr_a3c46825)arg3 genericTileType:(int)arg4;
- (id)initWithKey:(const struct VKTileKey *)arg1 imageData:(id)arg2 styleManager:(shared_ptr_a3c46825)arg3;

@end

