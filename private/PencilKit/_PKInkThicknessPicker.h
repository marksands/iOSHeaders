//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class NSArray, NSString;

@interface _PKInkThicknessPicker : UIControl
{
    NSString *_inkIdentifier;
    double _weight;
    NSArray *_inks;
    NSArray *_thicknessButtons;
}

+ (long long)buttonIndexForIdentifier:(id)arg1 weight:(double)arg2 isRTLLanguage:(_Bool)arg3;
+ (double)weightForInkIdentifier:(id)arg1 buttonIndex:(long long)arg2 isRTLLanguage:(_Bool)arg3;
+ (struct CGSize)_buttonSize;
@property(retain, nonatomic) NSArray *thicknessButtons; // @synthesize thicknessButtons=_thicknessButtons;
@property(retain, nonatomic) NSArray *inks; // @synthesize inks=_inks;
@property(nonatomic) double weight; // @synthesize weight=_weight;
@property(retain, nonatomic) NSString *inkIdentifier; // @synthesize inkIdentifier=_inkIdentifier;
- (void).cxx_destruct;
- (void)buttonTapped:(id)arg1;
- (_Bool)isRTLLanguage;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithInkIdentifier:(id)arg1;

@end

