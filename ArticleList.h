//
//  ArticleList.h
//  SCISProgram_restkit
//
//  Created by Phuong Nguyen on 3/27/15.
//  Copyright (c) 2015 msse. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Article;

@interface ArticleList : NSManagedObject

@property (nonatomic, retain) NSString * article_description;
@property (nonatomic, retain) NSString * title;
@property (nonatomic, retain) NSString * url;
@property (nonatomic, retain) NSSet *articles;
@end

@interface ArticleList (CoreDataGeneratedAccessors)

- (void)addArticlesObject:(Article *)value;
- (void)removeArticlesObject:(Article *)value;
- (void)addArticles:(NSSet *)values;
- (void)removeArticles:(NSSet *)values;

@end
