//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "HUCellProtocol.h"
#import "HUDisableableCellProtocol.h"
#import "HUStepperCellProtocol.h"

@class HFItem, NSNumber, NSString, UILabel, UIStepper;

@interface HUStepperCell : UITableViewCell <HUCellProtocol, HUDisableableCellProtocol, HUStepperCellProtocol>
{
    _Bool _disabled;
    HFItem *_item;
    NSNumber *_stepperValue;
    NSNumber *_minimumValue;
    NSNumber *_maximumValue;
    NSNumber *_stepValue;
    id <HUStepperCellDelegate> _stepperCellDelegate;
    UIStepper *_stepper;
    UILabel *_valueLabel;
}

@property(retain, nonatomic) UILabel *valueLabel; // @synthesize valueLabel=_valueLabel;
@property(retain, nonatomic) UIStepper *stepper; // @synthesize stepper=_stepper;
@property(nonatomic) __weak id <HUStepperCellDelegate> stepperCellDelegate; // @synthesize stepperCellDelegate=_stepperCellDelegate;
@property(copy, nonatomic) NSNumber *stepValue; // @synthesize stepValue=_stepValue;
@property(copy, nonatomic) NSNumber *maximumValue; // @synthesize maximumValue=_maximumValue;
@property(copy, nonatomic) NSNumber *minimumValue; // @synthesize minimumValue=_minimumValue;
@property(copy, nonatomic) NSNumber *stepperValue; // @synthesize stepperValue=_stepperValue;
@property(nonatomic, getter=isDisabled) _Bool disabled; // @synthesize disabled=_disabled;
@property(retain, nonatomic) HFItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (id)_valueDescription;
- (void)_toggleValueChange:(id)arg1;
- (void)_stepperValueDidChange:(id)arg1;
- (void)updateUIWithAnimation:(_Bool)arg1;
- (void)prepareForReuse;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak id <HUResizableCellDelegate> resizingDelegate;
@property(readonly) Class superclass;

@end

