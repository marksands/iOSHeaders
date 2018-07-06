//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SearchUIUtilities : NSObject
{
}

+ (_Bool)appIsValidForBundleIdentifier:(id)arg1;
+ (id)stringForSFRichTextArray:(id)arg1;
+ (id)stringForSFRichText:(id)arg1;
+ (id)localizedStringForKey:(id)arg1;
+ (void)requestDeviceUnlockWithSuccessHandler:(CDUnknownBlockType)arg1;
+ (_Bool)deviceIsAuthenticated;
+ (id)sendFeedbackForPunchout:(id)arg1 toListener:(id)arg2 fromCardSection:(id)arg3 triggerEvent:(unsigned long long)arg4;
+ (_Bool)shouldHandleCardSectionEngagement:(id)arg1 feedbackListener:(id)arg2;
+ (void)openPunchout:(id)arg1 fromCardSection:(id)arg2 toListener:(id)arg3 triggerEvent:(unsigned long long)arg4;
+ (void)performOpenTask:(CDUnknownBlockType)arg1;
+ (id)openOptions;
+ (void)openUserActivity:(id)arg1 applicationBundleIdentifier:(id)arg2;
+ (void)openPunchout:(id)arg1;
+ (void)performAnimatableChanges:(CDUnknownBlockType)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)performAnimatableChanges:(CDUnknownBlockType)arg1 animated:(_Bool)arg2;
+ (void)performAnimatableChanges:(CDUnknownBlockType)arg1;
+ (void)dispatchAsyncIfNecessary:(CDUnknownBlockType)arg1;
+ (void)dispatchMainIfNecessary:(CDUnknownBlockType)arg1;
+ (struct CGRect)absoluteFrameForView:(id)arg1;
+ (_Bool)isPortrait;
+ (_Bool)deviceSupportsRotation;
+ (_Bool)isWideScreen;
+ (id)addAspectRatioConstraintForImageView:(id)arg1;
+ (id)imageWithColor:(id)arg1 size:(struct CGSize)arg2 cornersToRound:(unsigned long long)arg3 cornerRadius:(double)arg4;
+ (id)imageWithColor:(id)arg1 size:(struct CGSize)arg2;
+ (id)horizontalAppNameFont;
+ (id)footnoteFont;
+ (id)captionFont;
+ (id)shortFontForFontStyle:(id)arg1;
+ (id)boldBodyFont;
+ (id)shortBodyFont;
+ (id)shortFootnoteFont;
+ (id)shortSubheadFont;
+ (id)shortSubheadBoldFont;
+ (id)shortTitle1Font;
+ (id)hyphenatableStringForString:(id)arg1;
+ (_Bool)isLargeIpad;
+ (double)standardTableCellContentInset;
+ (double)onePixelForCurrentScreenResolution;
+ (_Bool)backgroundColorPrefersWhiteForegroundText:(id)arg1;
+ (id)uiColorForSFColor:(id)arg1;
+ (id)vibrantButtonColorForStyle:(unsigned long long)arg1;
+ (id)buttonColorForStyle:(unsigned long long)arg1;
+ (id)textColorForSearchUIStyle:(unsigned long long)arg1;
+ (struct CGSize)maxThumbnailSize;
+ (void)initialize;

@end

