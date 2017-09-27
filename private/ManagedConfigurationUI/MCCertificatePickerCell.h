//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PSTableCell.h"

@class UILabel;

@interface MCCertificatePickerCell : PSTableCell
{
    UILabel *_issuedByLabel;
    UILabel *_issuerLabel;
    UILabel *_expiresByLabel;
    UILabel *_expiryDateLabel;
}

+ (id)_dateFormatter;
+ (float)_attributeLabelSpace;
+ (id)_attributeFont;
+ (float)defaultCellHeight;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setChecked:(_Bool)arg1;
- (void)setExpirationDate:(id)arg1;
- (void)setIssuer:(id)arg1;
- (id)_attributeLabelCopy;
- (id)_labelColor;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (id)_checkmarkView;

@end

