//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudDocsDaemon/NSSecureCoding-Protocol.h>

@class BRCAccountSession, BRCAppLibrary, BRCBookmark, BRCDirectoryEnumerator, BRCGenerationID, BRFileObjectID, NSData, NSSet, NSString, NSURL;

@interface BRCRelativePath : NSObject <NSSecureCoding>
{
    NSSet *_roots;
    NSString *_absolutePath;
    NSString *_relativePath;
    BRCRelativePath *_basePath;
    BRCBookmark *_bookmark;
    NSString *_symlinkContent;
    BRCGenerationID *_generationID;
    int _deviceID;
    BRCAppLibrary *_appLibrary;
    unsigned char _finderInfo[32];
    unsigned long long _fileID;
    unsigned short _mode;
    unsigned int _nlink;
    struct timespec _birthtime;
    struct timespec _mtime;
    long long _size;
    unsigned long long _parentFileID;
    unsigned int _documentID;
    unsigned int _fsGenerationID;
    unsigned int _flags;
    unsigned short _type;
    unsigned char _itemScope;
    unsigned int _isExcluded:1;
    unsigned int _isInPackage:1;
    unsigned int _isBundle:1;
    unsigned int _isPackageRoot:1;
    unsigned int _readFault:1;
    unsigned int _hasFinderTags:1;
    unsigned int _isBusy:1;
    unsigned int _hasFinderInfoAliasBit:1;
    unsigned int _isBRAlias:1;
    unsigned int _qtnResolved:1;
    unsigned int _xattrsResolved:1;
    int _fd;
    // Error parsing type: Ai, name: _openRefCount
    struct _opaque_pthread_rwlock_t {
        long long __sig;
        char __opaque[192];
    } _mutex;
    BRCDirectoryEnumerator *_descendantsEnumerator;
    BRCAccountSession *_session;
    NSData *_quarantineInfo;
    NSData *_xattrs;
}

+ (_Bool)supportsSecureCoding;
+ (int)locateByFileID:(unsigned long long)arg1 session:(id)arg2;
@property(nonatomic) unsigned char itemScope; // @synthesize itemScope=_itemScope;
@property(nonatomic) unsigned short type; // @synthesize type=_type;
@property(retain, nonatomic) BRCAppLibrary *appLibrary; // @synthesize appLibrary=_appLibrary;
@property(readonly, nonatomic) BRCAccountSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
@property(readonly) unsigned long long parentHash;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSData *xattrs; // @synthesize xattrs=_xattrs;
@property(readonly, nonatomic) NSData *quarantineInfo; // @synthesize quarantineInfo=_quarantineInfo;
@property(readonly, nonatomic) BRCBookmark *bookmark;
@property(readonly, nonatomic) NSString *faultDisplayName;
- (_Bool)isEqualToRelativePath:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)closeDirectoryScan;
- (id)nextChild;
- (_Bool)openDirectoryForScanWithError:(int *)arg1;
- (_Bool)performOnOpenParentFileDescriptor:(CDUnknownBlockType)arg1 error:(int *)arg2;
- (_Bool)performOnOpenFileDescriptor:(CDUnknownBlockType)arg1 error:(int *)arg2;
- (_Bool)flock:(int)arg1;
- (_Bool)resolveMustExist:(_Bool)arg1 error:(int *)arg2;
- (void)close;
- (void)_close;
- (_Bool)_shouldKeepBasePathOpenWithoutOpenedFD;
- (_Bool)_shouldKeepBasePathOpen;
- (void)refreshPathTypeAndContainer;
- (id)refreshFromPathMustExist:(_Bool)arg1;
- (_Bool)resolveAndKeepOpenMustExist:(_Bool)arg1 allowResolveInPkg:(_Bool)arg2 error:(int *)arg3;
- (_Bool)resolveAndKeepOpenMustExist:(_Bool)arg1 error:(int *)arg2;
- (_Bool)_resolveAndKeepOpenMustExist:(_Bool)arg1 allowResolveInPkg:(_Bool)arg2 error:(int *)arg3;
- (int)_resolveSymlinkRelativeTo:(int)arg1 path:(id)arg2;
- (int)_resolveWhenDoesntExist;
- (int)_resolveWhenExists;
- (_Bool)_fixupRelativePath;
- (_Bool)_resolveRootWhenExists:(_Bool)arg1;
- (int)_resolvePathTypeAndContainer;
- (int)_resolveBasePath:(_Bool)arg1;
@property(readonly, nonatomic) _Bool hasFinderTags;
@property(readonly, nonatomic) unsigned int fileType;
@property(readonly, nonatomic) _Bool isBRAlias;
@property(readonly, nonatomic) _Bool isFinderAlias;
- (_Bool)isFileWithFinderInfoAliasBit;
@property(readonly, nonatomic) _Bool isBusy;
@property(readonly, nonatomic) _Bool isHiddenFile;
@property(readonly, nonatomic) _Bool isHiddenExtension;
@property(readonly, nonatomic) _Bool isExecutable;
@property(readonly, nonatomic) _Bool isWritable;
@property(readonly, nonatomic) BRCGenerationID *generationID;
@property(readonly, nonatomic) unsigned int fsGenerationID;
@property(readonly, nonatomic) long long modificationTime;
@property(readonly, nonatomic) long long birthTime;
@property(readonly, nonatomic) long long size;
@property(readonly, nonatomic) int deviceID;
@property(readonly, nonatomic) unsigned int documentID;
@property(readonly, nonatomic) BRFileObjectID *parentFileObjectID;
@property(readonly, nonatomic) unsigned long long parentFileID;
@property(readonly, nonatomic) BRFileObjectID *fileObjectID;
@property(readonly, nonatomic) unsigned long long fileID;
@property(readonly, nonatomic) unsigned int hardlinkCount;
@property(readonly, nonatomic) NSString *symlinkContent;
@property(readonly, nonatomic) NSString *logicalName;
@property(readonly, nonatomic) NSString *filename;
@property(readonly, nonatomic) NSString *pathRelativeToPackageRoot;
@property(readonly, nonatomic) NSString *pathRelativeToRoot;
@property(readonly, nonatomic) NSString *absolutePath;
@property(readonly, nonatomic) _Bool exists;
@property(readonly, nonatomic) _Bool isSymLink;
@property(readonly, nonatomic) _Bool isExcluded;
- (_Bool)isResolved;
@property(readonly, nonatomic) _Bool isRoot;
@property(readonly, nonatomic) _Bool isInPackage;
@property(readonly, nonatomic) _Bool isPackageRoot;
@property(readonly, nonatomic) _Bool isFile;
@property(readonly, nonatomic) _Bool isUnixDir;
@property(readonly, nonatomic) _Bool isBundle;
@property(readonly, nonatomic) _Bool isFault;
@property(readonly, nonatomic) _Bool isDocument;
- (id)logicalURL;
- (id)logicalURLWithLogicalName:(id)arg1;
@property(readonly, nonatomic) NSURL *physicalURL;
@property(readonly, nonatomic) BRCRelativePath *root;
- (void)dealloc;
- (id)pathOfPackageRoot;
- (id)pathWithChildAtPath:(id)arg1;
- (id)initWithFileID:(unsigned long long)arg1 root:(id)arg2 session:(id)arg3;
- (id)initWithFileID:(unsigned long long)arg1 session:(id)arg2;
- (id)initWithPath:(id)arg1 appLibrary:(id)arg2;
- (id)initWithAbsolutePath:(id)arg1 session:(id)arg2;
- (id)_initWithPath:(id)arg1 relativeToRoot:(id)arg2;
- (id)initWithRootPath:(id)arg1 session:(id)arg2;
- (id)init;

@end

