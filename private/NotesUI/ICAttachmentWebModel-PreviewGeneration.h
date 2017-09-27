//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ICAttachmentWebModel.h"

@interface ICAttachmentWebModel (PreviewGeneration)
+ (id)sharedWKProcessPool;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)updatePreviewsWithWebIcons:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateTitle:(id)arg1 andDescription:(id)arg2;
- (void)updateFromWebQueryResults:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)parseWebQueryResults:(id)arg1 title:(id *)arg2 description:(id *)arg3 webIcons:(id *)arg4;
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;
- (id)standardWebIconsForURL:(id)arg1;
- (void)fetchMetadataFromURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)rootURLFromURL:(id)arg1;
- (void)downloadWebIcons:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)saveWebIcons:(id)arg1;
- (void)didCancelPreviewGeneratorOperation;
- (void)generatePreviewsInOperation:(id)arg1;
- (_Bool)generateAsynchronousPreviews;
- (_Bool)needToGeneratePreviews;
- (id)webView;
- (void)setWebView:(id)arg1;
@end

