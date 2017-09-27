//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SKUIStorePageItemPinningConfiguration : NSObject
{
    _Bool _hasValidPinningContentInset;
    _Bool _hasValidPinningStyle;
    _Bool _hasValidPinningGroup;
    _Bool _hasValidPinningTransitionStyle;
    long long _pinningStyle;
    long long _pinningGroup;
    long long _pinningTransitionStyle;
    struct UIEdgeInsets _pinningContentInset;
}

@property(readonly, nonatomic) _Bool hasValidPinningTransitionStyle; // @synthesize hasValidPinningTransitionStyle=_hasValidPinningTransitionStyle;
@property(nonatomic) long long pinningTransitionStyle; // @synthesize pinningTransitionStyle=_pinningTransitionStyle;
@property(readonly, nonatomic) _Bool hasValidPinningGroup; // @synthesize hasValidPinningGroup=_hasValidPinningGroup;
@property(readonly, nonatomic) _Bool hasValidPinningStyle; // @synthesize hasValidPinningStyle=_hasValidPinningStyle;
@property(nonatomic) long long pinningGroup; // @synthesize pinningGroup=_pinningGroup;
@property(nonatomic) long long pinningStyle; // @synthesize pinningStyle=_pinningStyle;
@property(readonly, nonatomic) _Bool hasValidPinningContentInset; // @synthesize hasValidPinningContentInset=_hasValidPinningContentInset;
@property(nonatomic) struct UIEdgeInsets pinningContentInset; // @synthesize pinningContentInset=_pinningContentInset;
- (void)invalidatePinningTransitionStyle;
- (void)invalidatePinningGroup;
- (void)invalidatePinningStyle;
- (void)invalidatePinningContentInset;

@end

