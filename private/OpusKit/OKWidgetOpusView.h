//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OpusKit/OKWidgetView.h>

@class NSURL, OKDocument, OKPresentationViewController;

@interface OKWidgetOpusView : OKWidgetView
{
    NSURL *_url;
    OKDocument *_document;
    OKPresentationViewController *_presentationViewController;
}

+ (void)setupJavascriptContext:(id)arg1;
+ (id)supportedSettings;
- (_Bool)prepareForUnload:(_Bool)arg1;
- (_Bool)prepareForWarmup:(_Bool)arg1;
- (_Bool)prepareForDisplay:(_Bool)arg1;
- (void)_loadDocumentIfNeeded;
- (void)setSettingUrl:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithWidget:(id)arg1;

@end
