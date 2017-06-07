//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, PSCapacityBarData, UIColor;

@interface PSCapacityBarView : UIView
{
    PSCapacityBarData *_barData;
    NSArray *_orderedCategories;
    UIColor *_barBackgroundColor;
    UIColor *_barSeparatorColor;
    UIColor *_barOtherDataColor;
}

@property(retain, nonatomic) UIColor *barOtherDataColor; // @synthesize barOtherDataColor=_barOtherDataColor;
@property(retain, nonatomic) UIColor *barSeparatorColor; // @synthesize barSeparatorColor=_barSeparatorColor;
@property(retain, nonatomic) UIColor *barBackgroundColor; // @synthesize barBackgroundColor=_barBackgroundColor;
@property(readonly) NSArray *orderedCategories; // @synthesize orderedCategories=_orderedCategories;
@property(retain, nonatomic) PSCapacityBarData *barData; // @synthesize barData=_barData;
- (void).cxx_destruct;
- (id)orderCategories;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

