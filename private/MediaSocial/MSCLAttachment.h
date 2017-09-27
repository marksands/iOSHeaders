//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class MPMediaItem, MSCLStoreItem, NSArray, NSData, NSString, NSURL, UIImage;

@interface MSCLAttachment : NSObject <NSCopying>
{
    _Bool _explicitContent;
    UIImage *_assetImage;
    NSURL *_assetURL;
    NSData *_data;
    MPMediaItem *_mediaItem;
    NSString *_UTI;
    double _duration;
    MSCLStoreItem *_album;
    NSArray *_artists;
    NSString *_attachmentDescription;
    NSString *_categoryName;
    NSString *_message;
    UIImage *_thumbnailImage;
    double _thumbnailImageTime;
    NSString *_title;
    struct CGSize _pixelSize;
}

@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) double thumbnailImageTime; // @synthesize thumbnailImageTime=_thumbnailImageTime;
@property(retain, nonatomic) UIImage *thumbnailImage; // @synthesize thumbnailImage=_thumbnailImage;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(nonatomic, getter=isExplicitContent) _Bool explicitContent; // @synthesize explicitContent=_explicitContent;
@property(copy, nonatomic) NSString *categoryName; // @synthesize categoryName=_categoryName;
@property(copy, nonatomic) NSString *attachmentDescription; // @synthesize attachmentDescription=_attachmentDescription;
@property(copy, nonatomic) NSArray *artists; // @synthesize artists=_artists;
@property(copy, nonatomic) MSCLStoreItem *album; // @synthesize album=_album;
@property(nonatomic) struct CGSize pixelSize; // @synthesize pixelSize=_pixelSize;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(copy, nonatomic) NSString *UTI; // @synthesize UTI=_UTI;
@property(retain, nonatomic) MPMediaItem *mediaItem; // @synthesize mediaItem=_mediaItem;
@property(copy, nonatomic) NSData *data; // @synthesize data=_data;
@property(copy, nonatomic) NSURL *assetURL; // @synthesize assetURL=_assetURL;
@property(retain, nonatomic) UIImage *assetImage; // @synthesize assetImage=_assetImage;
- (void).cxx_destruct;
- (id)copyMediaSocialPostAttachment;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_configureWithMediaItem:(id)arg1;
@property(readonly, nonatomic, getter=isDownloadable) _Bool downloadable;
@property(readonly, nonatomic) long long attachmentType;
- (id)initWithMediaItem:(id)arg1;
- (id)initWithImage:(id)arg1 typeIdentifier:(id)arg2;
- (id)initWithAssetURL:(id)arg1 typeIdentifier:(id)arg2;
- (id)initWithAssetData:(id)arg1 typeIdentifier:(id)arg2;

@end

