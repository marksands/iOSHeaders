//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NewsUI/NULayout.h>

@class NUViewNode;

@interface NUCanvas : NULayout
{
    NUViewNode *_viewNode;
    struct CGRect _lastFrame;
}

+ (id)canvasWithSizer:(id)arg1 options:(struct NULayoutOptions)arg2 inNode:(id)arg3 componentsBlock:(CDUnknownBlockType)arg4;
+ (id)canvasWithSizer:(id)arg1 options:(struct NULayoutOptions)arg2 componentsBlock:(CDUnknownBlockType)arg3;
+ (id)canvasWithSizer:(id)arg1 componentsBlock:(CDUnknownBlockType)arg2;
@property(nonatomic) struct CGRect lastFrame; // @synthesize lastFrame=_lastFrame;
@property(readonly, nonatomic) NUViewNode *viewNode; // @synthesize viewNode=_viewNode;
- (void).cxx_destruct;
- (void)layoutComponentsInBounds:(struct CGRect)arg1 layoutContext:(id)arg2;
- (void)layoutWithLayoutContext:(id)arg1;
- (void)layoutInBounds:(struct CGRect)arg1 traitCollection:(id)arg2;
- (id)resolveView;
- (id)initWithNode:(id)arg1 sizer:(id)arg2 options:(struct NULayoutOptions)arg3 componentsBlock:(CDUnknownBlockType)arg4;

@end
