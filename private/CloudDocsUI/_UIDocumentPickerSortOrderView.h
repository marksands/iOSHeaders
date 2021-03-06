//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class NSArray, UIButton, UISegmentedControl;

__attribute__((visibility("hidden")))
@interface _UIDocumentPickerSortOrderView : UIControl
{
    _Bool _listModeToggleHidden;
    id <_UIDocumentPickerViewServiceViewController> _serviceViewController;
    long long _listMode;
    UISegmentedControl *_sortOrder;
    UIButton *_listModeToggle;
    NSArray *_leftAlignedConstraints;
    NSArray *_centeredConstraints;
}

@property(copy, nonatomic) NSArray *centeredConstraints; // @synthesize centeredConstraints=_centeredConstraints;
@property(copy, nonatomic) NSArray *leftAlignedConstraints; // @synthesize leftAlignedConstraints=_leftAlignedConstraints;
@property(retain, nonatomic) UIButton *listModeToggle; // @synthesize listModeToggle=_listModeToggle;
@property(retain, nonatomic) UISegmentedControl *sortOrder; // @synthesize sortOrder=_sortOrder;
@property(nonatomic) _Bool listModeToggleHidden; // @synthesize listModeToggleHidden=_listModeToggleHidden;
@property(nonatomic) long long listMode; // @synthesize listMode=_listMode;
@property(nonatomic) id <_UIDocumentPickerViewServiceViewController> serviceViewController; // @synthesize serviceViewController=_serviceViewController;
- (void).cxx_destruct;
- (void)_toggleListMode:(id)arg1;
- (void)valueChanged:(id)arg1;
@property(nonatomic) int value;
- (void)updateForListMode;
- (void)layoutSubviews;
- (void)setNeedsLayout;
- (id)initWithFrame:(struct CGRect)arg1;

@end

