//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IKAppDocument, MusicJSProductNativeViewController, NSArray, NSDictionary;

@protocol MusicJSProductNativeViewControllerDelegate <NSObject>
- (void)jsProductNativeViewController:(MusicJSProductNativeViewController *)arg1 setRelatedContentDocument:(IKAppDocument *)arg2 options:(NSDictionary *)arg3;
- (void)jsProductNativeViewController:(MusicJSProductNativeViewController *)arg1 setTracklistItems:(NSArray *)arg2;
- (void)jsProductNativeViewController:(MusicJSProductNativeViewController *)arg1 setReportingInformation:(NSDictionary *)arg2;
- (void)jsProductNativeViewController:(MusicJSProductNativeViewController *)arg1 setProminentTrackStoreID:(long long)arg2;
- (void)jsProductNativeViewController:(MusicJSProductNativeViewController *)arg1 setProductEntityValueProviderData:(NSDictionary *)arg2;
- (void)jsProductNativeViewController:(MusicJSProductNativeViewController *)arg1 presentShareDocument:(IKAppDocument *)arg2 options:(NSDictionary *)arg3;
@end

