//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "UITextViewDelegate.h"

@class NSAttributedString, NSString, UITextView;

@interface HKEmergencyCardSOSDetailsCell : UITableViewCell <UITextViewDelegate>
{
    UITextView *_footerTextView;
}

@property(retain, nonatomic) UITextView *footerTextView; // @synthesize footerTextView=_footerTextView;
- (void).cxx_destruct;
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;
@property(readonly, nonatomic) NSAttributedString *footerTextViewString;
- (void)setupConstraints;
- (void)setupViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
