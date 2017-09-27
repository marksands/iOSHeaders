//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <WebCore/WAKResponder.h>

@class CALayer, WAKView;

@interface WAKWindow : WAKResponder
{
    CALayer *_hostLayer;
    // Error parsing type: ^{LegacyTileCache=@{RetainPtr<CGImage *>=^v}{RetainPtr<LegacyTileCacheTombstone>=^v}{optional<WebCore::FloatRect>=B(constexpr_storage_t<WebCore::FloatRect>=C{FloatRect={FloatPoint=ff}{FloatSize=ff}})}{IntSize=ii}iiBBBBBBBBBB{unique_ptr<WebCore::LegacyTileGrid, std::__1::default_delete<WebCore::LegacyTileGrid> >={__compressed_pair<WebCore::LegacyTileGrid *, std::__1::default_delete<WebCore::LegacyTileGrid> >=^{LegacyTileGrid}}}{unique_ptr<WebCore::LegacyTileGrid, std::__1::default_delete<WebCore::LegacyTileGrid> >={__compressed_pair<WebCore::LegacyTileGrid *, std::__1::default_delete<WebCore::LegacyTileGrid> >=^{LegacyTileGrid}}}{Timer=^^?{MonotonicTime=d}{MonotonicTime=d}{Seconds=d}iI^{Vector<WebCore::TimerBase *, 0, WTF::CrashOnOverflow, 16>}{Function<void ()>={unique_ptr<WTF::Function<void ()>::CallableWrapperBase, std::__1::default_delete<WTF::Function<void ()>::CallableWrapperBase> >={__compressed_pair<WTF::Function<void ()>::CallableWrapperBase *, std::__1::default_delete<WTF::Function<void ()>::CallableWrapperBase> >=^{CallableWrapperBase}}}}}{Vector<WebCore::IntRect, 0, WTF::CrashOnOverflow, 16>=^{IntRect}II}fff{Lock={Atomic<unsigned char>={atomic<unsigned char>=AC}}}{Lock={Atomic<unsigned char>={atomic<unsigned char>=AC}}}{Lock={Atomic<unsigned char>={atomic<unsigned char>=AC}}}}, name: _tileCache
    struct CGRect _frozenVisibleRect;
    CALayer *_rootLayer;
    struct CGSize _screenSize;
    struct CGSize _availableScreenSize;
    double _screenScale;
    struct CGRect _frame;
    WAKView *_contentView;
    WAKView *_responderView;
    WAKView *_nextResponder;
    _Bool _visible;
    _Bool _isInSnapshottingPaint;
    _Bool _useOrientationDependentFontAntialiasing;
    _Bool _entireWindowVisibleForTesting;
    // Error parsing type: {Lock="m_byte"{Atomic<unsigned char>="value"{atomic<unsigned char>="__a_"AC}}}, name: _exposedScrollViewRectLock
    struct CGRect _exposedScrollViewRect;
}

+ (id)currentEvent;
+ (_Bool)hasLandscapeOrientation;
+ (void)setOrientationProvider:(id)arg1;
@property(nonatomic) _Bool useOrientationDependentFontAntialiasing; // @synthesize useOrientationDependentFontAntialiasing=_useOrientationDependentFontAntialiasing;
- (id).cxx_construct;
- (id)recursiveDescription;
- (id)description;
- (void)setTileControllerShouldUseLowScaleTiles:(_Bool)arg1;
- (void)dumpTiles;
- (void)setAcceleratedDrawingEnabled:(_Bool)arg1;
- (void)setTilePaintCountsVisible:(_Bool)arg1;
- (void)setTileBordersVisible:(_Bool)arg1;
- (id)hostLayer;
- (void)unfreezeVisibleRect;
- (void)freezeVisibleRect;
- (void)didRotate;
- (void)willRotate;
- (void)displayRect:(struct CGRect)arg1;
@property(nonatomic) struct CGImage *contentReplacementImage;
- (_Bool)hasPendingDraw;
-     // Error parsing type: ^{LegacyTileCache=@{RetainPtr<CGImage *>=^v}{RetainPtr<LegacyTileCacheTombstone>=^v}{optional<WebCore::FloatRect>=B(constexpr_storage_t<WebCore::FloatRect>=C{FloatRect={FloatPoint=ff}{FloatSize=ff}})}{IntSize=ii}iiBBBBBBBBBB{unique_ptr<WebCore::LegacyTileGrid, std::__1::default_delete<WebCore::LegacyTileGrid> >={__compressed_pair<WebCore::LegacyTileGrid *, std::__1::default_delete<WebCore::LegacyTileGrid> >=^{LegacyTileGrid}}}{unique_ptr<WebCore::LegacyTileGrid, std::__1::default_delete<WebCore::LegacyTileGrid> >={__compressed_pair<WebCore::LegacyTileGrid *, std::__1::default_delete<WebCore::LegacyTileGrid> >=^{LegacyTileGrid}}}{Timer=^^?{MonotonicTime=d}{MonotonicTime=d}{Seconds=d}iI^{Vector<WebCore::TimerBase *, 0, WTF::CrashOnOverflow, 16>}{Function<void ()>={unique_ptr<WTF::Function<void ()>::CallableWrapperBase, std::__1::default_delete<WTF::Function<void ()>::CallableWrapperBase> >={__compressed_pair<WTF::Function<void ()>::CallableWrapperBase *, std::__1::default_delete<WTF::Function<void ()>::CallableWrapperBase> >=^{CallableWrapperBase}}}}}{Vector<WebCore::IntRect, 0, WTF::CrashOnOverflow, 16>=^{IntRect}II}fff{Lock={Atomic<unsigned char>={atomic<unsigned char>=AC}}}{Lock={Atomic<unsigned char>={atomic<unsigned char>=AC}}}{Lock={Atomic<unsigned char>={atomic<unsigned char>=AC}}}}16@0:8, name: tileCache
- (_Bool)keepsZoomedOutTiles;
- (void)setKeepsZoomedOutTiles:(_Bool)arg1;
- (float)currentTileScale;
- (void)setCurrentTileScale:(float)arg1;
- (float)zoomedOutTileScale;
- (void)setZoomedOutTileScale:(float)arg1;
- (int)tilingDirection;
- (void)setTilingDirection:(int)arg1;
- (int)tilingMode;
- (void)setTilingMode:(int)arg1;
- (void)removeForegroundTiles;
- (void)removeAllTiles;
- (void)removeAllNonVisibleTiles;
- (struct CGRect)extendedVisibleRect;
- (struct CGRect)visibleRect;
- (struct CGRect)_visibleRectRespectingMasksToBounds:(_Bool)arg1;
- (void)setEntireWindowVisibleForTesting:(_Bool)arg1;
- (_Bool)isInSnapshottingPaint;
- (void)setIsInSnapshottingPaint:(_Bool)arg1;
- (void)setTilesOpaque:(_Bool)arg1;
- (_Bool)tilesOpaque;
- (void)setNeedsDisplayInRect:(struct CGRect)arg1;
- (void)setNeedsDisplay;
- (void)layoutTilesNowForRect:(struct CGRect)arg1;
- (void)layoutTilesNow;
- (void)layoutTiles;
- (struct CGRect)exposedScrollViewRect;
- (void)setExposedScrollViewRect:(struct CGRect)arg1;
- (void)sendMouseMoveEvent:(id)arg1 contentChange:(int *)arg2;
- (void)sendEventSynchronously:(id)arg1;
- (void)sendEvent:(id)arg1;
- (id)rootLayer;
- (void)setRootLayer:(id)arg1;
- (double)screenScale;
- (void)setScreenScale:(double)arg1;
- (struct CGSize)availableScreenSize;
- (void)setAvailableScreenSize:(struct CGSize)arg1;
- (struct CGSize)screenSize;
- (void)setScreenSize:(struct CGSize)arg1;
- (void)setContentRect:(struct CGRect)arg1;
- (struct CGRect)frame;
- (void)setFrame:(struct CGRect)arg1 display:(_Bool)arg2;
- (_Bool)makeFirstResponder:(id)arg1;
- (int)keyViewSelectionDirection;
- (void)setVisible:(_Bool)arg1;
- (_Bool)isVisible;
- (void)makeKeyWindow;
- (_Bool)isKeyWindow;
- (struct CGRect)convertRectFromScreen:(struct CGRect)arg1;
- (struct CGRect)convertRectToScreen:(struct CGRect)arg1;
- (struct CGPoint)convertScreenToBase:(struct CGPoint)arg1;
- (struct CGPoint)convertBaseToScreen:(struct CGPoint)arg1;
- (id)_newFirstResponderAfterResigning;
- (id)firstResponder;
- (void)close;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithLayer:(id)arg1;

@end

