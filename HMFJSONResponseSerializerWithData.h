//
//  HMFJSONResponseSerializerWithData.h
//  MA Mobile
//
//  Created by Brandon Butler on 10/15/13.
//  Copyright (c) 2013 POS Management. All rights reserved.
//

#import "AFURLResponseSerialization.h"

/// NSError userInfo key that will contain response data
static NSString * const JSONResponseSerializerWithDataKey = @"body";
static NSString * const JSONResponseSerializerWithBodyKey = @"statusCode";

@interface HMFJSONResponseSerializerWithData : AFJSONResponseSerializer

@end