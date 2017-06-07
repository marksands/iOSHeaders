//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AccessibilityUIService/AXUIAlertStyleProvider-Protocol.h>

@class NSBundle, NSString;

@interface AXUIAlertStyleProvider : NSObject <AXUIAlertStyleProvider>
{
    NSBundle *_bundle;
}

+ (id)styleProvider;
@property(retain, nonatomic) NSBundle *bundle; // @synthesize bundle=_bundle;
- (void).cxx_destruct;
- (double)alertFadeAnimationDurationForType:(unsigned long long)arg1;
- (int)alertPositionForType:(unsigned long long)arg1;
- (struct UIEdgeInsets)alertEdgeInsetsForType:(unsigned long long)arg1;
- (struct UIEdgeInsets)alertIconImageEdgeInsetsForType:(unsigned long long)arg1;
- (double)alertSubtitleTextVerticalSpacingHeightWithTextForType:(unsigned long long)arg1;
- (double)alertSubtitleTextLineHeightOffsetForType:(unsigned long long)arg1;
- (id)alertSubtitleTextColorForType:(unsigned long long)arg1;
- (id)alertSubtitleTextFontForType:(unsigned long long)arg1;
- (double)alertTextLineHeightOffsetForType:(unsigned long long)arg1;
- (id)alertTextColorForType:(unsigned long long)arg1;
- (id)alertTextFontForType:(unsigned long long)arg1;
- (struct UIEdgeInsets)alertContentEdgeInsetsForType:(unsigned long long)arg1;
- (_Bool)alertShouldGrowInAxis:(long long)arg1 forType:(unsigned long long)arg2;
- (struct CGSize)alertBackgroundSizeForType:(unsigned long long)arg1;
- (double)alertBackgroundCornerRadiusForType:(unsigned long long)arg1;
- (int)alertBackgroundStyleForType:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

