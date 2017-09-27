//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WFWebPageProtocol.h"

@class NSObject<WFWebPageProtocol>, NSString, WFImgArrayCache;

__attribute__((visibility("hidden")))
@interface WFWebPageDecorator : NSObject <WFWebPageProtocol>
{
    NSObject<WFWebPageProtocol> *webPageStripper;
    WFImgArrayCache *pageImagesPropertyCache;
    NSString *URLString;
}

+ (id)webPageWithString:(id)arg1 URLString:(id)arg2;
+ (id)webPageWithString:(id)arg1;
+ (id)webPageWithData:(id)arg1 URLString:(id)arg2;
+ (id)webPageWithData:(id)arg1;
+ (id)plainTextWithWebPageString:(id)arg1;
+ (id)plainTextWithWebPageData:(id)arg1;
+ (id)_plainTextWithSelector:(SEL)arg1 object:(id)arg2;
@property(retain) NSString *URLString; // @synthesize URLString;
- (void)dealloc;
- (id)plainText;
- (id)rawPlainText;
- (id)plainTextAttributeWithSelector:(SEL)arg1 title:(id)arg2 weight:(int)arg3;
- (id)plainTextAttributeWithSelector:(SEL)arg1 title:(id)arg2;
- (id)tags;
- (long long)wordCount;
- (id)linkTitlesText;
- (long long)numberOfKnownImagePixels;
- (long long)numberOfUnknownSizedImages;
- (id)imageAltsText;
- (long long)numberOfImages;
- (void)_cacheImgProperties;
- (_Bool)hasShortRefresh;
- (_Bool)hasFrameset;
- (id)links;
- (id)pageContent;
- (id)images;
- (id)scriptBlocks;
- (id)metaTagsUnlabeled;
- (id)metaTagsLabeled;
- (id)metaTagKeywords;
- (id)metaTagDescription;
- (id)pageTitle;
- (id)initWithWebPageStripper:(id)arg1;
- (id)initWithWebPageString:(id)arg1;
- (id)initWithWebPageData:(id)arg1;

@end

