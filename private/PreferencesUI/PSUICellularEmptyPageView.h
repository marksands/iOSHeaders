//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "PSHeaderFooterView.h"
#import "UITextViewDelegate.h"

@class NSString, UILabel, UILayoutGuide, UITextView;

@interface PSUICellularEmptyPageView : UIView <UITextViewDelegate, PSHeaderFooterView>
{
    UILabel *_titleLabel;
    UITextView *_linkTextView;
    UILayoutGuide *_layoutGuide;
}

@property(retain, nonatomic) UILayoutGuide *layoutGuide; // @synthesize layoutGuide=_layoutGuide;
@property(retain, nonatomic) UITextView *linkTextView; // @synthesize linkTextView=_linkTextView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (double)preferredHeightForWidth:(double)arg1 inTableView:(id)arg2;
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;
- (void)setLinkText:(id)arg1 url:(id)arg2;
- (id)initWithSpecifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

