//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class HKAdjustableTapTargetButton, NSArray, UILabel, UIStackView, _HKDocumentImageView;

@interface HKCDADocumentTableViewCell : UITableViewCell
{
    _HKDocumentImageView *_documentImageView;
    UILabel *_titleLabel;
    NSArray *_cellLabels;
    UIStackView *_imageLabelStack;
    _Bool _showsCheckbox;
    id <HKCDADocumentTableViewCellDelegate> _delegate;
    HKAdjustableTapTargetButton *_checkboxButton;
}

@property(retain, nonatomic) HKAdjustableTapTargetButton *checkboxButton; // @synthesize checkboxButton=_checkboxButton;
@property(retain, nonatomic) id <HKCDADocumentTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool showsCheckbox; // @synthesize showsCheckbox=_showsCheckbox;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_selectedCheckbox:(id)arg1;
- (void)_setDocumentLabelWithTag:(long long)arg1 text:(id)arg2 view:(id)arg3;
- (id)_createDocumentCellLabelWithTag:(long long)arg1 fontSizePts:(double)arg2 whiteLevel:(double)arg3 flexibleHeight:(_Bool)arg4;
- (void)_updateForCurrentSizeCategory;
- (void)_setupCellStructure;
@property(nonatomic, getter=isChecked) _Bool checked;
- (void)setCellValuesForDocumentSample:(id)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

