//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VectorKit/VKTile.h>

__attribute__((visibility("hidden")))
@interface VKRasterOverlayTile : VKTile
{
    struct unique_ptr<ggl::RenderItem, std::__1::default_delete<ggl::RenderItem>> _renderItem;
    struct unique_ptr<ggl::Textured::Pos2DUVPipelineSetup, std::__1::default_delete<ggl::Textured::Pos2DUVPipelineSetup>> _pipelineSetup;
    struct shared_ptr<md::RasterOverlayData> _overlayData;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct Texture2D *gglTexture;
- (struct RenderItem *)setupRenderItemWithRenderState:(struct RenderState *)arg1 pipelineState:(const shared_ptr_8d835d6a *)arg2 mesh:(struct Mesh *)arg3;
- (struct CGContext *)drawContext;
- (_Bool)isEmpty;
@property(readonly, nonatomic) struct RenderItem *renderItem;
- (id)initWithKey:(const struct VKTileKey *)arg1 size:(unsigned long long)arg2 scale:(float)arg3;

@end
