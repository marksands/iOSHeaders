//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "VNModelFile.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface VNModelFileImpl : NSObject <VNModelFile>
{
    const struct mapped_model_file *m_impl;
}

- (void)advise:(long long)arg1;
@property(readonly, nonatomic) unsigned long long length;
@property(readonly, nonatomic) const void *baseAddress;
- (id)initWithMappedModel:(const struct mapped_model_file *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSString *resourcePath;
@property(readonly) Class superclass;

@end

