//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class AVPlayerController, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface WebAVPlayerLayer : CALayer
{
    struct RefPtr<WebCore::WebVideoFullscreenInterfaceAVKit> _fullscreenInterface;
    struct RetainPtr<WebAVPlayerController> _avPlayerController;
    struct RetainPtr<CALayer> _videoSublayer;
    struct RetainPtr<NSString> _videoGravity;
    _Bool _readyForDisplay;
    NSDictionary *_pixelBufferAttributes;
    struct CGSize _videoDimensions;
    struct CGRect _modelVideoLayerFrame;
}

+ (id)keyPathsForValuesAffectingVideoRect;
@property struct CGRect modelVideoLayerFrame; // @synthesize modelVideoLayerFrame=_modelVideoLayerFrame;
@property struct CGSize videoDimensions; // @synthesize videoDimensions=_videoDimensions;
@property(copy, nonatomic) NSDictionary *pixelBufferAttributes; // @synthesize pixelBufferAttributes=_pixelBufferAttributes;
@property(nonatomic, getter=isReadyForDisplay) _Bool readyForDisplay; // @synthesize readyForDisplay=_readyForDisplay;
- (id).cxx_construct;
- (void).cxx_destruct;
- (struct CGRect)videoRect;
@property(retain, nonatomic) NSString *videoGravity;
- (void)resolveBounds;
- (void)layoutSublayers;
@property(retain, nonatomic) CALayer *videoSublayer;
@property(retain, nonatomic) AVPlayerController *playerController;
// Error parsing type for property fullscreenInterface:
// Property attributes: T^{WebVideoFullscreenInterfaceAVKit=^^?^^?^^?{atomic<unsigned int>=AI}{Ref<WebCore::WebPlaybackSessionInterfaceAVKit>=^{WebPlaybackSessionInterfaceAVKit}}{RetainPtr<WebAVPlayerViewControllerDelegate>=^v}{RetainPtr<AVPlayerViewController>=^v}^{WebVideoFullscreenModel}^{WebVideoFullscreenChangeObserver}{RetainPtr<UIWindow>=^v}{RetainPtr<UIViewController>=^v}{RetainPtr<UIView>=^v}{RetainPtr<UIWindow>=^v}{RetainPtr<WebAVPlayerLayerView>=^v}I{function<void (bool)>={type=[32C]}^{__base<void (bool)>}}{Timer=^^?{MonotonicTime=d}{MonotonicTime=d}{Seconds=d}iI^{Vector<WebCore::TimerBase *, 0, WTF::CrashOnOverflow, 16>}{function<void ()>={type=[32C]}^{__base<void ()>}}}BBBBBBB},N

- (void)dealloc;
- (id)init;

@end

