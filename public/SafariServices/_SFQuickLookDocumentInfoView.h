//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSLayoutConstraint, NSString, UIImageView, UILabel, UIStackView;

__attribute__((visibility("hidden")))
@interface _SFQuickLookDocumentInfoView : UIView
{
    UIStackView *_stackView;
    UILabel *_fileNameLabel;
    UILabel *_fileSizeLabel;
    UIView *_spacingView;
    NSLayoutConstraint *_iconHeightConstraint;
    NSLayoutConstraint *_iconWidthConstraint;
    NSLayoutConstraint *_lineHeightBetweenIconAndFileNameLabelConstraint;
    UIImageView *_iconImageView;
    NSString *_fileName;
    NSString *_fileSize;
    NSString *_fileType;
}

@property(retain, nonatomic) NSString *fileType; // @synthesize fileType=_fileType;
@property(retain, nonatomic) NSString *fileSize; // @synthesize fileSize=_fileSize;
@property(retain, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
- (void).cxx_destruct;
- (void)_updateDocumentSizeLabel;
- (void)_updatePropertiesDefinedByContentSizeCategory;
- (void)_configureOrientationBasedConstraints:(long long)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

