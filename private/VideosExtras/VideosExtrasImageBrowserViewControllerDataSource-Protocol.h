//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class VideosExtrasImageBrowserViewController;

@protocol VideosExtrasImageBrowserViewControllerDataSource <NSObject>
- (void)imageBrowserViewController:(VideosExtrasImageBrowserViewController *)arg1 loadDescriptionAtIndex:(unsigned long long)arg2 withCompletionHandler:(void (^)(NSAttributedString *))arg3;
- (void)imageBrowserViewController:(VideosExtrasImageBrowserViewController *)arg1 loadSubtitleAtIndex:(unsigned long long)arg2 withCompletionHandler:(void (^)(NSAttributedString *))arg3;
- (void)imageBrowserViewController:(VideosExtrasImageBrowserViewController *)arg1 loadTitleAtIndex:(unsigned long long)arg2 withCompletionHandler:(void (^)(NSAttributedString *))arg3;
- (void)imageBrowserViewController:(VideosExtrasImageBrowserViewController *)arg1 loadImageAtIndex:(unsigned long long)arg2 withCompletionHandler:(void (^)(UIImage *))arg3;
- (unsigned long long)numberOfImagesForBrowserViewController:(VideosExtrasImageBrowserViewController *)arg1;
@end

