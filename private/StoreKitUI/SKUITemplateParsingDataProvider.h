//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSVURLDataConsumer.h"

@class NSRegularExpression;

@interface SKUITemplateParsingDataProvider : SSVURLDataConsumer
{
    NSRegularExpression *_regularExpression;
}

+ (id)templateParsingRegularExpression;
@property(readonly, nonatomic) NSRegularExpression *regularExpression; // @synthesize regularExpression=_regularExpression;
- (void).cxx_destruct;
- (id)objectForData:(id)arg1 response:(id)arg2 error:(id *)arg3;
- (id)initWithRegularExpression:(id)arg1;

@end

