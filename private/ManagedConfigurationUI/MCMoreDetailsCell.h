//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Preferences/PSTableCell.h>

@class MCMoreDetailsContentView;

@interface MCMoreDetailsCell : PSTableCell
{
    MCMoreDetailsContentView *_mcContentView;
}

+ (float)defaultHeight;
- (void).cxx_destruct;
- (void)setCertificate:(struct __SecCertificate *)arg1;
- (void)setPayload:(id)arg1;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

