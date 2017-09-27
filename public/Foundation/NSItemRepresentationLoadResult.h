//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSData, NSError, NSSecurityScopedURLWrapper, NSString;

@interface NSItemRepresentationLoadResult : NSObject <NSCopying>
{
    _Bool _wasOpenedInPlace;
    NSData *_data;
    NSSecurityScopedURLWrapper *_urlWrapper;
    CDUnknownBlockType _cleanupHandler;
    NSError *_error;
    NSString *_archivedObjectClassName;
}

+ (id)resultWithError:(id)arg1;
+ (id)resultWithData:(id)arg1 urlWrapper:(id)arg2 cleanupHandler:(CDUnknownBlockType)arg3 error:(id)arg4;
@property(nonatomic) _Bool wasOpenedInPlace; // @synthesize wasOpenedInPlace=_wasOpenedInPlace;
@property(copy, nonatomic) NSString *archivedObjectClassName; // @synthesize archivedObjectClassName=_archivedObjectClassName;
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(copy, nonatomic) CDUnknownBlockType cleanupHandler; // @synthesize cleanupHandler=_cleanupHandler;
@property(retain, nonatomic) NSSecurityScopedURLWrapper *urlWrapper; // @synthesize urlWrapper=_urlWrapper;
@property(copy, nonatomic) NSData *data; // @synthesize data=_data;
- (id)copyWithData:(id)arg1 urlWrapper:(id)arg2 cleanupHandler:(CDUnknownBlockType)arg3 error:(id)arg4;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;

@end

