//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface LXTICompiledCollatorFile : NSObject
{
    int m_descriptor;
    char *m_mappedFile;
    long long m_length;
    NSString *m_path;
}

+ (struct UCollator *)createCollatorWithType:(int)arg1;
+ (id)sharedCollatorFile;
- (struct UCollator *)createCollatorWithType:(int)arg1;
- (void)dealloc;
- (id)initWithPath:(id)arg1 error:(unsigned int *)arg2;

@end

