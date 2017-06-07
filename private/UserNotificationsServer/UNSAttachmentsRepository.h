//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;

@interface UNSAttachmentsRepository : NSObject
{
    NSURL *_directoryURL;
}

+ (id)_sha1HashOfFileAtURL:(id)arg1;
- (void).cxx_destruct;
- (id)_attachmentDirectoryForBundleIdentifier:(id)arg1;
- (id)_fileURLForDigestString:(id)arg1 extension:(id)arg2 bundleIdentifier:(id)arg3;
- (void)ensureIntegrityUsingNotificationIdentifiersForBundleIdentifiers:(id)arg1;
- (unsigned long long)_transformNotificationIdentifiersForRepositoryURL:(id)arg1 bundleIdentifier:(id)arg2 usingTransformBlock:(CDUnknownBlockType)arg3;
- (void)_transformAttachmentsForBundleIdentifier:(id)arg1 usingTransformBlock:(CDUnknownBlockType)arg2;
- (void)_removeAllReferencesForBundleIdentifier:(id)arg1;
- (unsigned long long)_removeReferencesToRepositoryURL:(id)arg1 forNotificationIdentifier:(id)arg2 bundleIdentifier:(id)arg3;
- (unsigned long long)_addReferencesToRepositoryURL:(id)arg1 forNotificationIdentifier:(id)arg2 bundleIdentifier:(id)arg3;
- (void)deleteAllFilesForBundleIdentifier:(id)arg1;
- (void)_removeRepositoryURL:(id)arg1;
- (void)removeReferenceToRepositoryURL:(id)arg1 forNotificationIdentifier:(id)arg2 bundleIdentifier:(id)arg3;
- (id)moveFileIntoRepositoryFromFileURL:(id)arg1 forNotificationIdentifier:(id)arg2 bundleIdentifier:(id)arg3;
- (_Bool)isValidRepositoryURL:(id)arg1 forBundleIdentifier:(id)arg2;
- (_Bool)isRepositoryURL:(id)arg1;
- (id)_claimedRepositoryURLsForBundleIdentifier:(id)arg1;
- (id)bundleIdentifiersClaimingAttachments;
- (id)initWithDirectoryURL:(id)arg1;

@end
