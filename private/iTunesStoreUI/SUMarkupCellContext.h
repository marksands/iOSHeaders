//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iTunesStoreUI/SUItemCellContext.h>

@class NSString;

@interface SUMarkupCellContext : SUItemCellContext
{
    long long _pendingWebViewLoads;
    NSString *_stylesheet;
    struct __CFDictionary *_webViewCache;
    double _webViewWidth;
}

@property(nonatomic) double webViewWidth; // @synthesize webViewWidth=_webViewWidth;
@property(retain, nonatomic) NSString *stylesheet; // @synthesize stylesheet=_stylesheet;
- (void)webViewDidFinishLoading:(id)arg1;
- (id)webViewForMarkup:(id)arg1;
- (void)dealloc;

@end

