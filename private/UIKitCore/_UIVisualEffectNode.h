//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSMutableArray, UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface _UIVisualEffectNode : NSObject
{
    NSMutableArray *_filterEntries;
    NSMutableArray *_viewEffects;
    NSMutableArray *_underlays;
    NSMutableArray *_overlays;
    _Bool _textShouldRenderWithTintColor;
    _Bool _disableInPlaceFiltering;
    UIVisualEffectView *_hostEffectView;
    NSDictionary *_options;
}

+ (id)newTransitionNodeForStops:(id)arg1;
@property(nonatomic) _Bool disableInPlaceFiltering; // @synthesize disableInPlaceFiltering=_disableInPlaceFiltering;
@property(nonatomic) _Bool textShouldRenderWithTintColor; // @synthesize textShouldRenderWithTintColor=_textShouldRenderWithTintColor;
@property(copy, nonatomic) NSArray *overlays; // @synthesize overlays=_overlays;
@property(copy, nonatomic) NSArray *underlays; // @synthesize underlays=_underlays;
@property(copy, nonatomic) NSArray *viewEffects; // @synthesize viewEffects=_viewEffects;
@property(copy, nonatomic) NSArray *filterEntries; // @synthesize filterEntries=_filterEntries;
@property(readonly, copy, nonatomic) NSDictionary *options; // @synthesize options=_options;
@property(nonatomic) __weak UIVisualEffectView *hostEffectView; // @synthesize hostEffectView=_hostEffectView;
- (void).cxx_destruct;
- (id)description;
- (id)copyForTransitionToNode:(id)arg1;
- (void)addOverlay:(id)arg1;
- (void)addUnderlay:(id)arg1;
- (void)addFilterEntry:(id)arg1;
- (void)addViewEffect:(id)arg1;
- (id)initWithOptions:(id)arg1;
- (id)init;

@end

