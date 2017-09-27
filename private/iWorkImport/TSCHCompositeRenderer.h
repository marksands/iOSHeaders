//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSCHRenderer.h>

#import "TSCHCompositeRendering.h"

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface TSCHCompositeRenderer : TSCHRenderer <TSCHCompositeRendering>
{
    NSArray *mSubRenderers;
    TSCHRenderer *mEventHandler;
}

+ (void)renderTSCHCompositeRendering:(id)arg1 intoContext:(struct CGContext *)arg2 visible:(struct CGRect)arg3;
+ (void)p_delegateSelector:(SEL)arg1 toRenderer:(id)arg2 transparencyLayer:(int)arg3 inContext:(struct CGContext *)arg4;
@property(readonly, nonatomic) NSArray *renderers; // @synthesize renderers=mSubRenderers;
- (void)p_renderIntoContext:(struct CGContext *)arg1 visible:(struct CGRect)arg2;
- (void)didEndTransparencyLayer:(int)arg1 inContext:(struct CGContext *)arg2;
- (void)willEndTransparencyLayer:(int)arg1 inContext:(struct CGContext *)arg2;
- (void)didBeginTransparencyLayer:(int)arg1 inContext:(struct CGContext *)arg2;
- (void)willBeginTransparencyLayer:(int)arg1 inContext:(struct CGContext *)arg2;
- (void)p_delegateSelectorToRenderers:(SEL)arg1 transparencyLayer:(int)arg2 inContext:(struct CGContext *)arg3;
- (void)drawIntoLayer:(int)arg1 inContext:(struct CGContext *)arg2 visible:(struct CGRect)arg3;
- (_Bool)needsAnySeparateLayers;
- (id)transparencyLayers;
- (void)dealloc;
- (id)initWithChartRep:(id)arg1 withSubRenderers:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

