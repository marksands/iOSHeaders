//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, UIFont, UILabel, UIStackView;
@protocol HFStringGenerator;

@interface HUTitleDescriptionContentView : UIView
{
    _Bool _disabled;
    id <HFStringGenerator> _titleText;
    id <HFStringGenerator> _descriptionText;
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
    UIStackView *_stackView;
    NSArray *_verticalLabelConstraints;
    NSArray *_horizontalLabelConstraints;
}

@property(retain, nonatomic) NSArray *horizontalLabelConstraints; // @synthesize horizontalLabelConstraints=_horizontalLabelConstraints;
@property(retain, nonatomic) NSArray *verticalLabelConstraints; // @synthesize verticalLabelConstraints=_verticalLabelConstraints;
@property(readonly, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(readonly, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic, getter=isDisabled) _Bool disabled; // @synthesize disabled=_disabled;
@property(retain, nonatomic) id <HFStringGenerator> descriptionText; // @synthesize descriptionText=_descriptionText;
@property(retain, nonatomic) id <HFStringGenerator> titleText; // @synthesize titleText=_titleText;
- (void).cxx_destruct;
- (void)_updateLabel:(id)arg1 withContent:(id)arg2;
- (void)_setupDescriptionLabel;
- (void)_setupTitleLabel;
- (void)_setupStackView;
@property(retain, nonatomic) UIFont *descriptionFont;
@property(retain, nonatomic) UIFont *titleFont;
- (id)initWithFrame:(struct CGRect)arg1;

@end

