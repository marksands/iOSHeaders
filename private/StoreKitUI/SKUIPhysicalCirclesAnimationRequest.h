//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreKitUI/NSCopying-Protocol.h>

@interface SKUIPhysicalCirclesAnimationRequest : NSObject <NSCopying>
{
    long long _animationType;
    CDUnknownBlockType _completionBlock;
}

@property(nonatomic) long long animationType; // @synthesize animationType=_animationType;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_setCompletionBlock:(CDUnknownBlockType)arg1;
- (void)finishAnimation;

@end
