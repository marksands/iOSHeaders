//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MIME/MFBaseFilterDataConsumer.h>

@interface MFRangedDataFilter : MFBaseFilterDataConsumer
{
    struct _NSRange _range;
    unsigned long long _consumedLength;
}

+ (id)rangedFilterWithConsumer:(id)arg1 range:(struct _NSRange)arg2;
+ (id)rangedFilterWithConsumers:(id)arg1 range:(struct _NSRange)arg2;
@property(nonatomic) struct _NSRange range; // @synthesize range=_range;
- (long long)appendData:(id)arg1;

@end

