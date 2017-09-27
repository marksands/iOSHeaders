//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, NSString, UIImage, UIImageView, UILabel, UIVisualEffectView;

@interface WATodayHeaderView : UIView
{
    NSString *_conditionsLine1;
    NSString *_conditionsLine2;
    UIImage *_conditionsImage;
    NSString *_temperature;
    NSString *_temperatureHigh;
    NSString *_temperatureLow;
    NSString *_locationName;
    UIVisualEffectView *_locationLabelVisualEffectView;
    UIVisualEffectView *_conditionsLabel1VisualEffectView;
    UIVisualEffectView *_conditionsLabel2VisualEffectView;
    UIVisualEffectView *_temperatureLabelVisualEffectView;
    UIVisualEffectView *_temperatureHighLowLabelVisualEffectView;
    UILabel *_locationLabel;
    UILabel *_conditionsLabel1;
    UILabel *_conditionsLabel2;
    UIImageView *_conditionsImageView;
    UILabel *_temperatureLabel;
    UILabel *_temperatureHighLowLabel;
    double _pageFontSize;
    double _pageDegreeFontSize;
    double _pageBaselineOffset;
    NSArray *_contentViewConstraints;
    NSArray *_masterConstraints;
}

+ (_Bool)requiresConstraintBasedLayout;
@property(retain, nonatomic) NSArray *masterConstraints; // @synthesize masterConstraints=_masterConstraints;
@property(retain, nonatomic) NSArray *contentViewConstraints; // @synthesize contentViewConstraints=_contentViewConstraints;
@property(nonatomic) double pageBaselineOffset; // @synthesize pageBaselineOffset=_pageBaselineOffset;
@property(nonatomic) double pageDegreeFontSize; // @synthesize pageDegreeFontSize=_pageDegreeFontSize;
@property(nonatomic) double pageFontSize; // @synthesize pageFontSize=_pageFontSize;
@property(retain, nonatomic) UILabel *temperatureHighLowLabel; // @synthesize temperatureHighLowLabel=_temperatureHighLowLabel;
@property(retain, nonatomic) UILabel *temperatureLabel; // @synthesize temperatureLabel=_temperatureLabel;
@property(retain, nonatomic) UIImageView *conditionsImageView; // @synthesize conditionsImageView=_conditionsImageView;
@property(retain, nonatomic) UILabel *conditionsLabel2; // @synthesize conditionsLabel2=_conditionsLabel2;
@property(retain, nonatomic) UILabel *conditionsLabel1; // @synthesize conditionsLabel1=_conditionsLabel1;
@property(retain, nonatomic) UILabel *locationLabel; // @synthesize locationLabel=_locationLabel;
@property(retain, nonatomic) UIVisualEffectView *temperatureHighLowLabelVisualEffectView; // @synthesize temperatureHighLowLabelVisualEffectView=_temperatureHighLowLabelVisualEffectView;
@property(retain, nonatomic) UIVisualEffectView *temperatureLabelVisualEffectView; // @synthesize temperatureLabelVisualEffectView=_temperatureLabelVisualEffectView;
@property(retain, nonatomic) UIVisualEffectView *conditionsLabel2VisualEffectView; // @synthesize conditionsLabel2VisualEffectView=_conditionsLabel2VisualEffectView;
@property(retain, nonatomic) UIVisualEffectView *conditionsLabel1VisualEffectView; // @synthesize conditionsLabel1VisualEffectView=_conditionsLabel1VisualEffectView;
@property(retain, nonatomic) UIVisualEffectView *locationLabelVisualEffectView; // @synthesize locationLabelVisualEffectView=_locationLabelVisualEffectView;
@property(copy, nonatomic) NSString *locationName; // @synthesize locationName=_locationName;
@property(copy, nonatomic) NSString *temperatureLow; // @synthesize temperatureLow=_temperatureLow;
@property(copy, nonatomic) NSString *temperatureHigh; // @synthesize temperatureHigh=_temperatureHigh;
@property(copy, nonatomic) NSString *temperature; // @synthesize temperature=_temperature;
@property(copy, nonatomic) UIImage *conditionsImage; // @synthesize conditionsImage=_conditionsImage;
@property(copy, nonatomic) NSString *conditionsLine2; // @synthesize conditionsLine2=_conditionsLine2;
@property(copy, nonatomic) NSString *conditionsLine1; // @synthesize conditionsLine1=_conditionsLine1;
- (void).cxx_destruct;
- (void)_setupConstraints;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_setupSubviews;
- (void)_updateContent;
- (id)init;

@end

