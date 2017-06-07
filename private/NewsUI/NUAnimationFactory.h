//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI/_UIBasicAnimationFactory-Protocol.h>

@class CAMediaTimingFunction, NSString;

@interface NUAnimationFactory : NSObject <_UIBasicAnimationFactory>
{
    CAMediaTimingFunction *_mediaTimingFunction;
}

@property(readonly, nonatomic) CAMediaTimingFunction *mediaTimingFunction; // @synthesize mediaTimingFunction=_mediaTimingFunction;
- (void).cxx_destruct;
- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;
- (id)_timingFunctionForAnimation;
- (id)initWithMediaTimingFunction:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

