//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewHeaderFooterView.h"

#import "PSHeaderFooterView.h"

@class NSMutableArray, PSSpecifier, UILabel;

@interface AXUISettingsInstructionsView : UITableViewHeaderFooterView <PSHeaderFooterView>
{
    PSSpecifier *_specifier;
    UILabel *_headerLabel;
    NSMutableArray *_contentLabels;
    NSMutableArray *_marginConstraints;
}

- (void).cxx_destruct;
- (double)preferredHeightForWidth:(double)arg1;
- (void)setNeedsLayout;
- (void)_initializeContent;
- (id)settingsLocString:(id)arg1 table:(id)arg2;
- (id)initWithSpecifier:(id)arg1;

@end

