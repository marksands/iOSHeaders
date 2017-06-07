//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TemplateKit/TLKView.h>

@class TLKMultilineText, TLKVibrantLabel, UIActivityIndicatorView;

@interface TLKActivityIndicatorView : TLKView
{
    TLKMultilineText *_subtitle;
    UIActivityIndicatorView *_activityIndicator;
    TLKVibrantLabel *_subtitleLabel;
}

@property(retain) TLKVibrantLabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(retain) TLKMultilineText *subtitle; // @synthesize subtitle=_subtitle;
- (void).cxx_destruct;
- (id)subtitleLabelText;
- (void)observedPropertiesChanged;
- (id)observableProperties;
- (void)styleDidChange:(unsigned long long)arg1;
- (id)init;

@end

