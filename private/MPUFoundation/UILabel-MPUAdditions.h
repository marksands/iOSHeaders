//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UILabel.h"

#import "MPUAutoupdatingTextContainer.h"

@class MPUTextContainerContentSizeUpdater, NSAttributedString, NSString, UIFont;

@interface UILabel (MPUAdditions) <MPUAutoupdatingTextContainer>
@property(nonatomic, setter=MPU_setAutomaticallyUpdatesTextStyleFontsToPreferredTextStyleFonts:) _Bool MPU_automaticallyUpdatesTextStyleFontsToPreferredTextStyleFonts;
@property(readonly, nonatomic) MPUTextContainerContentSizeUpdater *MPU_contentSizeUpdater;
- (void)MPU_configureWithTextAttributes:(id)arg1;

// Remaining properties
@property(copy, nonatomic) NSAttributedString *attributedText;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) UIFont *font;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

