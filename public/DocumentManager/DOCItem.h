//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class FPItem, FPSandboxingURLWrapper, NSString, NSURL;

@interface DOCItem : NSObject <NSSecureCoding>
{
    FPSandboxingURLWrapper *_wrapper;
    _Bool _needsToBeImported;
    NSString *_contentType;
    NSURL *_fileURL;
    NSString *_bookmarkableString;
    FPItem *_fileProviderItem;
}

+ (_Bool)isAnyItemAFault:(id)arg1;
+ (_Bool)supportsSecureCoding;
+ (id)documentsURLsForItems:(id)arg1;
@property(retain) FPItem *fileProviderItem; // @synthesize fileProviderItem=_fileProviderItem;
@property(retain) NSString *bookmarkableString; // @synthesize bookmarkableString=_bookmarkableString;
@property(copy, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(copy, nonatomic) NSString *contentType; // @synthesize contentType=_contentType;
- (void).cxx_destruct;
- (void)setNeedsToBeImported:(_Bool)arg1;
- (_Bool)needsToBeImported;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)fileURLForUploading;
- (id)coordinatedFileURL;
- (void)copyURLToInbox:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)prepareForMode:(unsigned long long)arg1 usingBookmark:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)initWithURL:(id)arg1 fileProviderItem:(id)arg2;
- (id)initWithBookmarkableString:(id)arg1 fileProviderItem:(id)arg2;

@end

