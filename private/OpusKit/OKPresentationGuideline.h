//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString, OKMediaItem, OKPresentation, OKPresentationCanvas, OKProducerPlugin;

@interface OKPresentationGuideline : NSObject <NSCopying>
{
    OKPresentation *_presentation;
    unsigned long long _type;
    double _timestamp;
    NSString *_key;
    id _value;
    OKMediaItem *_mediaItem;
    NSString *_mediaItemUniqueURLString;
    OKPresentationCanvas *_presentationCanvas;
    unsigned long long _presentationCanvasType;
    NSString *_presentationCanvasKeyPath;
    OKProducerPlugin *_producerPlugin;
    NSString *_producerPluginUUID;
}

+ (id)guidelineAuthoringDebuggingEnabled:(_Bool)arg1;
+ (id)guidelineAuthoringFitToAudioDuration:(_Bool)arg1;
+ (id)guidelineAuthoringMaximumDuration:(double)arg1;
+ (id)guidelineAuthoringMinimumDuration:(double)arg1;
+ (id)guidelineAuthoringDurationFactor:(double)arg1;
+ (id)guidelineAuthoringTotalDuration:(double)arg1;
+ (id)guidelineAuthoringCurrentPageDuration:(double)arg1;
+ (id)guidelineAuthoringPageDuration:(double)arg1;
+ (id)guidelineAuthoringMediaAttributes:(id)arg1;
+ (id)guidelineAuthoringInteractiveTransitionSettings:(id)arg1;
+ (id)guidelineAuthoringTransitionSettings:(id)arg1;
+ (id)guidelineAuthoringAttributedTitle:(id)arg1;
+ (id)guidelineAuthoringTitle:(id)arg1;
+ (id)guidelineAuthoringAudioURLs:(id)arg1;
+ (id)guidelineAuthoringSynopsis:(id)arg1;
+ (id)guidelineAuthoringRandomSeed:(unsigned long long)arg1;
+ (id)guidelineAuthoringDefaultMobileRecommendedResolutionSizes;
+ (id)defaultMobileRecommendedResolutionSizes;
+ (id)guidelineAuthoringRecommendedResolutionSizes:(id)arg1;
+ (id)guidelineLiveAuthoringEnabled:(_Bool)arg1;
+ (id)globalUniqueKeyForKey:(id)arg1 mediaItem:(id)arg2 presentationCanvas:(id)arg3 producerPlugin:(id)arg4;
+ (id)globalUniqueKeyForKey:(id)arg1 producerPlugin:(id)arg2;
+ (id)globalUniqueKeyForKey:(id)arg1 presentationCanvas:(id)arg2;
+ (id)globalUniqueKeyForKey:(id)arg1 mediaItem:(id)arg2;
+ (id)globalUniqueKeyForKey:(id)arg1;
+ (id)guidelineWithType:(unsigned long long)arg1 key:(id)arg2 value:(id)arg3;
@property(retain, nonatomic) id value; // @synthesize value=_value;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
@property(readonly, nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (id)globalUniqueKey;
- (id)description;
- (id)dictionary;
- (id)initWithDictionary:(id)arg1;
@property(retain, nonatomic) OKProducerPlugin *producerPlugin; // @synthesize producerPlugin=_producerPlugin;
- (id)presentationCanvasKeyPath;
@property(retain, nonatomic) OKPresentationCanvas *presentationCanvas; // @synthesize presentationCanvas=_presentationCanvas;
@property(retain, nonatomic) OKMediaItem *mediaItem; // @synthesize mediaItem=_mediaItem;
@property(nonatomic) OKPresentation *presentation; // @synthesize presentation=_presentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithType:(unsigned long long)arg1 key:(id)arg2 value:(id)arg3;
- (id)initWithType:(unsigned long long)arg1;
- (id)init;

@end

