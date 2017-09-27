//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class SUDescriptor, SUDownloadMetadata, SUOperationProgress;

@interface SUDownload : NSObject <NSSecureCoding, NSCopying>
{
    SUDescriptor *_descriptor;
    SUOperationProgress *_progress;
    SUDownloadMetadata *_metadata;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) SUDownloadMetadata *metadata; // @synthesize metadata=_metadata;
@property(retain, nonatomic) SUDescriptor *descriptor; // @synthesize descriptor=_descriptor;
@property(retain, nonatomic) SUOperationProgress *progress; // @synthesize progress=_progress;
- (id)description;
- (unsigned long long)totalSpaceConsumed;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end

