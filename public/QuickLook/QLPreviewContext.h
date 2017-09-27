//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSNumber, NSString, NSURL, QLItem, UIColor;

__attribute__((visibility("hidden")))
@interface QLPreviewContext : NSObject <NSSecureCoding>
{
    _Bool _canBeEdited;
    id <QLItemThumbnailGeneratorProtocolInternal> _thumbnailGenerator;
    NSString *_previewTitle;
    NSString *_contentType;
    NSURL *_editedFileURL;
    NSString *_password;
    unsigned long long _previewItemType;
    UIColor *_backgroundColor;
    NSNumber *_itemSize;
    long long _processIdentifier;
    QLItem *_item;
}

+ (_Bool)supportsSecureCoding;
@property(retain) QLItem *item; // @synthesize item=_item;
@property long long processIdentifier; // @synthesize processIdentifier=_processIdentifier;
@property(retain) NSNumber *itemSize; // @synthesize itemSize=_itemSize;
@property(retain) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property unsigned long long previewItemType; // @synthesize previewItemType=_previewItemType;
@property(retain) NSString *password; // @synthesize password=_password;
@property _Bool canBeEdited; // @synthesize canBeEdited=_canBeEdited;
@property(retain) NSURL *editedFileURL; // @synthesize editedFileURL=_editedFileURL;
@property(retain) NSString *contentType; // @synthesize contentType=_contentType;
@property(retain) NSString *previewTitle; // @synthesize previewTitle=_previewTitle;
@property(retain) id <QLItemThumbnailGeneratorProtocolInternal> thumbnailGenerator; // @synthesize thumbnailGenerator=_thumbnailGenerator;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;

@end

