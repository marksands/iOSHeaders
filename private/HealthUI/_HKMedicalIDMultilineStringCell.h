//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import <HealthUI/HKMultilineCellHeightEstimatable-Protocol.h>

@class NSString, UILabel, UITextView;

@interface _HKMedicalIDMultilineStringCell : UITableViewCell <HKMultilineCellHeightEstimatable>
{
    UILabel *_titleLabel;
    UITextView *_textLabel;
    NSString *_stringValue;
}

@property(retain, nonatomic) NSString *stringValue; // @synthesize stringValue=_stringValue;
- (void).cxx_destruct;
- (double)estimatedHeightWithWidth:(double)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
@property(nonatomic, getter=isBodyTextInteractive) _Bool bodyTextInteractive;
@property(retain, nonatomic) NSString *title;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

