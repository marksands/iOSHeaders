//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/_UIVisualEffectViewEntry.h>

@class NSString, UIImage;

__attribute__((visibility("hidden")))
@interface _UIOverlayEffectViewImageEntry : _UIVisualEffectViewEntry
{
    NSString *_filterType;
    UIImage *_image;
    double _alpha;
}

@property(nonatomic) double alpha; // @synthesize alpha=_alpha;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(copy, nonatomic) NSString *filterType; // @synthesize filterType=_filterType;
- (void).cxx_destruct;
- (id)description;
- (_Bool)canTransitionToEffect:(id)arg1;
- (void)removeEffectFromView:(id)arg1;
- (void)applyIdentityEffectToView:(id)arg1;
- (void)applyRequestedEffectToView:(id)arg1;
- (void)addEffectToView:(id)arg1;

@end

