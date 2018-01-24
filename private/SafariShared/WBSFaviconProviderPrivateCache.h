//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSCache, NSMutableDictionary;

@interface WBSFaviconProviderPrivateCache : NSObject
{
    NSCache *_uuidToImageDataCache;
    NSMutableDictionary *_pageURLStringToIconInfoDict;
    NSMutableDictionary *_iconURLStringToIconInfoDict;
}

- (void).cxx_destruct;
- (void)removeAllImageDataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)removeImageDataForPageURLString:(id)arg1;
- (_Bool)linkPageURLString:(id)arg1 toIconURLString:(id)arg2;
- (void)setImageData:(id)arg1 forPageURLString:(id)arg2 iconURLString:(id)arg3 iconSize:(struct CGSize)arg4;
- (id)imageInfoForIconURLString:(id)arg1;
- (id)imageInfoForPageURLString:(id)arg1;
- (id)pageURLStringsWithPrefixesIn:(id)arg1;
- (id)firstImageDataMatchingPageURLStringIn:(id)arg1 matchedPageURLString:(id *)arg2;
- (id)imageDataForIconURLString:(id)arg1;
- (id)imageDataForPageURLString:(id)arg1;
- (id)init;

@end

