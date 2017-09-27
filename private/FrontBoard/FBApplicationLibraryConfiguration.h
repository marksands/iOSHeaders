//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@interface FBApplicationLibraryConfiguration : NSObject <NSCopying>
{
    Class _applicationInfoClass;
    Class _applicationPlaceholderClass;
    _Bool _allowConcurrentLoading;
    CDUnknownBlockType _installedApplicationFilter;
    CDUnknownBlockType _placeholderFilter;
}

@property(copy, nonatomic) CDUnknownBlockType placeholderFilter; // @synthesize placeholderFilter=_placeholderFilter;
@property(copy, nonatomic) CDUnknownBlockType installedApplicationFilter; // @synthesize installedApplicationFilter=_installedApplicationFilter;
@property(nonatomic) _Bool allowConcurrentLoading; // @synthesize allowConcurrentLoading=_allowConcurrentLoading;
@property(retain, nonatomic) Class applicationPlaceholderClass; // @synthesize applicationPlaceholderClass=_applicationPlaceholderClass;
@property(retain, nonatomic) Class applicationInfoClass; // @synthesize applicationInfoClass=_applicationInfoClass;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

@end

